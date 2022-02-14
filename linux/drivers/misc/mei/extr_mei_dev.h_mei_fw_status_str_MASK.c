
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_fw_status {int dummy; } ;
struct mei_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct mei_device*,struct mei_fw_status*) ;
 int FUNC_1 (struct mei_fw_status*,char*,int ) ;

__attribute__((used)) static inline ssize_t FUNC_2(struct mei_device *VAR_1,
     char *VAR_2, size_t VAR_3)
{
 struct mei_fw_status VAR_4;
 int VAR_5;

 VAR_2[0] = '\0';

 VAR_5 = FUNC_0(VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(&VAR_4, VAR_2, VAR_0);

 return VAR_5;
}
