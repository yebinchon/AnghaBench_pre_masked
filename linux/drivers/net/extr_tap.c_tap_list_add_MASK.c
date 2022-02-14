
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct major_info {char const* device_name; int next; int minor_lock; int minor_idr; int major; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct major_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(dev_t VAR_3, const char *VAR_4)
{
 struct major_info *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->major = FUNC_0(VAR_3);

 FUNC_1(&VAR_5->minor_idr);
 FUNC_4(&VAR_5->minor_lock);

 VAR_5->device_name = VAR_4;

 FUNC_3(&VAR_5->next, &VAR_2);
 return 0;
}
