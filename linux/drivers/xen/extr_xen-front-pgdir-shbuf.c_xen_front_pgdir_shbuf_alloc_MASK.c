
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xen_front_pgdir_shbuf_cfg {int pages; int num_pages; int xb_dev; scalar_t__ be_alloc; struct xen_front_pgdir_shbuf* pgdir; } ;
struct xen_front_pgdir_shbuf {TYPE_1__* ops; int pages; int num_pages; int xb_dev; } ;
struct TYPE_3__ {int (* fill_page_dir ) (struct xen_front_pgdir_shbuf*) ;int (* calc_num_grefs ) (struct xen_front_pgdir_shbuf*) ;} ;


 int FUNC_0 (struct xen_front_pgdir_shbuf*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct xen_front_pgdir_shbuf*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct xen_front_pgdir_shbuf*) ;
 int FUNC_3 (struct xen_front_pgdir_shbuf*) ;
 int FUNC_4 (struct xen_front_pgdir_shbuf*) ;

int FUNC_5(struct xen_front_pgdir_shbuf_cfg *VAR_2)
{
 struct xen_front_pgdir_shbuf *VAR_3 = VAR_2->pgdir;
 int VAR_4;

 if (VAR_2->be_alloc)
  VAR_3->ops = &VAR_0;
 else
  VAR_3->ops = &VAR_1;
 VAR_3->xb_dev = VAR_2->xb_dev;
 VAR_3->num_pages = VAR_2->num_pages;
 VAR_3->pages = VAR_2->pages;

 VAR_3->ops->calc_num_grefs(VAR_3);

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  goto fail;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto fail;

 VAR_3->ops->fill_page_dir(VAR_3);

 return 0;

fail:
 FUNC_4(VAR_3);
 return VAR_4;
}
