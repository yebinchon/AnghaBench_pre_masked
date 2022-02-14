
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xen_pfn_t ;
struct xen_add_to_physmap {unsigned int idx; int gpfn; int space; void* domid; } ;
struct gnttab_setup_table {unsigned int nr_frames; scalar_t__ status; int frame_list; void* dom; } ;
struct TYPE_4__ {int (* map_frames ) (int *,unsigned int) ;} ;
struct TYPE_3__ {unsigned int count; int * pfn; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct gnttab_setup_table*,int) ;
 int FUNC_2 (int ,struct xen_add_to_physmap*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,unsigned int) ;
 TYPE_1__ VAR_9 ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_10, unsigned int VAR_11)
{
 struct gnttab_setup_table VAR_12;
 xen_pfn_t *VAR_13;
 unsigned int VAR_14 = VAR_11 + 1;
 int VAR_15;

 if (FUNC_8(VAR_5)) {
  struct xen_add_to_physmap VAR_16;
  unsigned int VAR_17 = VAR_11;
  VAR_15 = 0;
  FUNC_0(VAR_9.count < VAR_14);




  do {
   VAR_16.domid = VAR_0;
   VAR_16.idx = VAR_17;
   VAR_16.space = VAR_6;
   VAR_16.gpfn = VAR_9.pfn[VAR_17];
   VAR_15 = FUNC_2(VAR_7, &VAR_16);
   if (VAR_15 != 0) {
    FUNC_5("grant table add_to_physmap failed, err=%d\n",
     VAR_15);
    break;
   }
  } while (VAR_17-- > VAR_10);

  return VAR_15;
 }




 VAR_13 = FUNC_4(VAR_14, sizeof(unsigned long), VAR_3);
 if (!VAR_13)
  return -VAR_1;

 VAR_12.dom = VAR_0;
 VAR_12.nr_frames = VAR_14;
 FUNC_6(VAR_12.frame_list, VAR_13);

 VAR_15 = FUNC_1(VAR_4, &VAR_12, 1);
 if (VAR_15 == -VAR_2) {
  FUNC_3(VAR_13);
  return -VAR_2;
 }

 FUNC_0(VAR_15 || VAR_12.status);

 VAR_15 = VAR_8->map_frames(VAR_13, VAR_14);

 FUNC_3(VAR_13);

 return VAR_15;
}
