
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_hba {struct fd_host* hba_ptr; } ;
struct se_device {int dummy; } ;
struct fd_host {int dummy; } ;
struct fd_dev {struct se_device dev; struct fd_host* fd_host; } ;


 int VAR_0 ;
 struct fd_dev* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct se_device *FUNC_3(struct se_hba *VAR_1, const char *VAR_2)
{
 struct fd_dev *VAR_3;
 struct fd_host *VAR_4 = VAR_1->hba_ptr;

 VAR_3 = FUNC_0(sizeof(struct fd_dev), VAR_0);
 if (!VAR_3) {
  FUNC_2("Unable to allocate memory for struct fd_dev\n");
  return ((void*)0);
 }

 VAR_3->fd_host = VAR_4;

 FUNC_1("FILEIO: Allocated fd_dev for %p\n", VAR_2);

 return &VAR_3->dev;
}
