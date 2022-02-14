
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {size_t vm_end; int vm_flags; int vm_start; int vm_page_prot; } ;
struct file {scalar_t__ private_data; } ;
struct dax_ctx {scalar_t__ owner; int ca_buf_ra; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,int ,int,size_t,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_8, struct vm_area_struct *VAR_9)
{
 struct dax_ctx *VAR_10 = (struct dax_ctx *)VAR_8->private_data;
 size_t VAR_11 = VAR_9->vm_end - VAR_9->vm_start;

 FUNC_0("len=0x%lx, flags=0x%lx", VAR_11, VAR_9->vm_flags);

 if (VAR_10->owner != VAR_7) {
  FUNC_0("devmap called from wrong thread");
  return -VAR_2;
 }

 if (VAR_11 != VAR_0) {
  FUNC_0("len(%lu) != DAX_MMAP_LEN(%d)", VAR_11, VAR_0);
  return -VAR_2;
 }


 if (VAR_9->vm_flags & VAR_6)
  return -VAR_3;
 VAR_9->vm_flags &= ~VAR_5;

 if (FUNC_1(VAR_9, VAR_9->vm_start, VAR_10->ca_buf_ra >> VAR_4,
       VAR_11, VAR_9->vm_page_prot))
  return -VAR_1;

 FUNC_0("mmapped completion area at uva 0x%lx", VAR_9->vm_start);
 return 0;
}
