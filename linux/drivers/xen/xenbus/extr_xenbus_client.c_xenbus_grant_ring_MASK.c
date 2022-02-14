
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int otherend_id; } ;
typedef int grant_ref_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct xenbus_device*,int,char*) ;

int FUNC_4(struct xenbus_device *VAR_1, void *VAR_2,
        unsigned int VAR_3, grant_ref_t *VAR_4)
{
 int VAR_5;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = FUNC_1(VAR_1->otherend_id,
        FUNC_2(VAR_2), 0);
  if (VAR_5 < 0) {
   FUNC_3(VAR_1, VAR_5,
      "granting access to ring page");
   goto fail;
  }
  VAR_4[VAR_6] = VAR_5;

  VAR_2 = VAR_2 + VAR_0;
 }

 return 0;

fail:
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_0(VAR_4[VAR_7], 0);
 return VAR_5;
}
