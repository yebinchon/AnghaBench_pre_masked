
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct writeback_control {int sync_mode; } ;
struct cifs_writedata {unsigned int nr_pages; unsigned int pagesz; TYPE_2__* cfile; scalar_t__ bytes; int credits; int pid; scalar_t__ tailsz; int * pages; scalar_t__ offset; int sync_mode; } ;
struct address_space {int host; } ;
struct TCP_Server_Info {TYPE_3__* ops; } ;
typedef int loff_t ;
struct TYPE_8__ {TYPE_1__* ses; } ;
struct TYPE_7__ {int (* async_writev ) (struct cifs_writedata*,int ) ;} ;
struct TYPE_6__ {scalar_t__ invalidHandle; int pid; int tlink; } ;
struct TYPE_5__ {struct TCP_Server_Info* server; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct TCP_Server_Info*,int *,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct cifs_writedata*,int ) ;
 TYPE_4__* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct cifs_writedata *VAR_3, unsigned int VAR_4,
   struct address_space *VAR_5, struct writeback_control *VAR_6)
{
 int VAR_7;
 struct TCP_Server_Info *VAR_8 =
    FUNC_5(VAR_3->cfile->tlink)->ses->server;

 VAR_3->sync_mode = VAR_6->sync_mode;
 VAR_3->nr_pages = VAR_4;
 VAR_3->offset = FUNC_3(VAR_3->pages[0]);
 VAR_3->pagesz = VAR_1;
 VAR_3->tailsz = FUNC_2(FUNC_1(VAR_5->host) -
   FUNC_3(VAR_3->pages[VAR_4 - 1]),
   (loff_t)VAR_1);
 VAR_3->bytes = ((VAR_4 - 1) * VAR_1) + VAR_3->tailsz;
 VAR_3->pid = VAR_3->cfile->pid;

 VAR_7 = FUNC_0(VAR_8, &VAR_3->credits, VAR_3->bytes);
 if (VAR_7)
  return VAR_7;

 if (VAR_3->cfile->invalidHandle)
  VAR_7 = -VAR_0;
 else
  VAR_7 = VAR_8->ops->async_writev(VAR_3, VAR_2);

 return VAR_7;
}
