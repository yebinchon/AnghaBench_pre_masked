
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_hba {struct rd_host* hba_ptr; } ;
struct se_device {int dummy; } ;
struct rd_host {int dummy; } ;
struct rd_dev {struct se_device dev; struct rd_host* rd_host; } ;


 int VAR_0 ;
 struct rd_dev* FUNC_0 (int,int ) ;

__attribute__((used)) static struct se_device *FUNC_1(struct se_hba *VAR_1, const char *VAR_2)
{
 struct rd_dev *VAR_3;
 struct rd_host *VAR_4 = VAR_1->hba_ptr;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->rd_host = VAR_4;

 return &VAR_3->dev;
}
