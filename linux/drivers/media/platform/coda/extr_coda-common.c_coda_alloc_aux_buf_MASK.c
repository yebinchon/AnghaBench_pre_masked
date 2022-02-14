
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct coda_dev {int dev; int v4l2_dev; } ;
struct TYPE_2__ {size_t size; scalar_t__ data; } ;
struct coda_aux_buf {size_t size; int dentry; TYPE_1__ blob; scalar_t__ vaddr; int paddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int,struct dentry*,TYPE_1__*) ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ FUNC_2 (int ,size_t,int *,int ) ;
 int FUNC_3 (int *,char*,char const*,size_t) ;

int FUNC_4(struct coda_dev *VAR_2, struct coda_aux_buf *VAR_3,
         size_t VAR_4, const char *VAR_5, struct dentry *VAR_6)
{
 VAR_3->vaddr = FUNC_2(VAR_2->dev, VAR_4, &VAR_3->paddr,
     VAR_1);
 if (!VAR_3->vaddr) {
  FUNC_3(&VAR_2->v4l2_dev,
    "Failed to allocate %s buffer of size %zu\n",
    VAR_5, VAR_4);
  return -VAR_0;
 }

 VAR_3->size = VAR_4;

 if (VAR_5 && VAR_6) {
  VAR_3->blob.data = VAR_3->vaddr;
  VAR_3->blob.size = VAR_4;
  VAR_3->dentry = FUNC_0(VAR_5, 0644, VAR_6,
        &VAR_3->blob);
  if (!VAR_3->dentry)
   FUNC_1(VAR_2->dev,
     "failed to create debugfs entry %s\n", VAR_5);
 }

 return 0;
}
