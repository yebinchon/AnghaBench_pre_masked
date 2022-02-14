
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_module_parameters {int file_count; int stall; scalar_t__** file; int * removable; int * cdrom; int * ro; scalar_t__ luns; } ;
struct fsg_lun_config {int ro; int cdrom; int removable; scalar_t__* filename; } ;
struct fsg_config {unsigned int nluns; unsigned int fsg_num_buffers; int can_stall; int * private_data; int * ops; int * product_name; int * vendor_name; struct fsg_lun_config* luns; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

void FUNC_1(struct fsg_config *VAR_1,
         const struct fsg_module_parameters *VAR_2,
         unsigned int VAR_3)
{
 struct fsg_lun_config *VAR_4;
 unsigned VAR_5;


 VAR_1->nluns =
  FUNC_0(VAR_2->luns ?: (VAR_2->file_count ?: 1u),
      (unsigned)VAR_0);
 for (VAR_5 = 0, VAR_4 = VAR_1->luns; VAR_5 < VAR_1->nluns; ++VAR_5, ++VAR_4) {
  VAR_4->ro = !!VAR_2->ro[VAR_5];
  VAR_4->cdrom = !!VAR_2->cdrom[VAR_5];
  VAR_4->removable = !!VAR_2->removable[VAR_5];
  VAR_4->filename =
   VAR_2->file_count > VAR_5 && VAR_2->file[VAR_5][0]
   ? VAR_2->file[VAR_5]
   : ((void*)0);
 }


 VAR_1->vendor_name = ((void*)0);
 VAR_1->product_name = ((void*)0);

 VAR_1->ops = ((void*)0);
 VAR_1->private_data = ((void*)0);


 VAR_1->can_stall = VAR_2->stall;
 VAR_1->fsg_num_buffers = VAR_3;
}
