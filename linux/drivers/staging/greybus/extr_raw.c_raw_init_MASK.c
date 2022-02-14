
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(void)
{
 dev_t VAR_5;
 int VAR_6;

 VAR_3 = FUNC_4(VAR_1, "gb_raw");
 if (FUNC_0(VAR_3)) {
  VAR_6 = FUNC_2(VAR_3);
  goto error_class;
 }

 VAR_6 = FUNC_3(&VAR_5, 0, VAR_0, "gb_raw");
 if (VAR_6 < 0)
  goto error_chrdev;

 VAR_4 = FUNC_1(VAR_5);

 VAR_6 = FUNC_6(&VAR_2);
 if (VAR_6)
  goto error_gb;

 return 0;

error_gb:
 FUNC_7(VAR_5, VAR_0);
error_chrdev:
 FUNC_5(VAR_3);
error_class:
 return VAR_6;
}
