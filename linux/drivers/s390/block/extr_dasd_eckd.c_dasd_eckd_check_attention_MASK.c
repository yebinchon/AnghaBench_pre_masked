
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct check_attention_work_data {int worker; int lpum; struct dasd_device* device; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct dasd_device*) ;
 struct check_attention_work_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dasd_device *VAR_3, __u8 VAR_4)
{
 struct check_attention_work_data *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 FUNC_0(&VAR_5->worker, VAR_2);
 FUNC_1(VAR_3);
 VAR_5->device = VAR_3;
 VAR_5->lpum = VAR_4;
 FUNC_3(&VAR_5->worker);
 return 0;
}
