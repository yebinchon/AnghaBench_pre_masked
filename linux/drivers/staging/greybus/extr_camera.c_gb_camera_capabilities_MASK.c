
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_camera {int bundle; int mutex; int connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *,int ,void*,size_t*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gb_camera*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct gb_camera *VAR_3,
      u8 *VAR_4, size_t *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3->bundle);
 if (VAR_6)
  return VAR_6;

 FUNC_4(&VAR_3->mutex);

 if (!VAR_3->connection) {
  VAR_6 = -VAR_0;
  goto done;
 }

 VAR_6 = FUNC_0(VAR_3->connection,
          VAR_1,
          VAR_2,
          ((void*)0), 0,
          (void *)VAR_4, VAR_5);
 if (VAR_6)
  FUNC_3(VAR_3, "failed to retrieve capabilities: %d\n", VAR_6);

done:
 FUNC_5(&VAR_3->mutex);

 FUNC_2(VAR_3->bundle);

 return VAR_6;
}
