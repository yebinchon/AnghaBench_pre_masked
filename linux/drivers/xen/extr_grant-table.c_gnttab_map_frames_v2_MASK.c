
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xen_pfn_t ;
typedef int uint64_t ;
struct gnttab_get_status_frames {unsigned int nr_frames; scalar_t__ status; int frame_list; int dom; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct gnttab_get_status_frames*,int) ;
 int FUNC_2 (int *,unsigned int,unsigned int,int *) ;
 int FUNC_3 (int *,unsigned int,unsigned int,int *) ;
 unsigned int FUNC_4 () ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (unsigned int,int,int ) ;
 unsigned int FUNC_7 (unsigned int) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(xen_pfn_t *VAR_7, unsigned int VAR_8)
{
 uint64_t *VAR_9;
 unsigned int VAR_10;
 struct gnttab_get_status_frames VAR_11;
 int VAR_12;

 VAR_10 = FUNC_7(VAR_8);




 VAR_9 = FUNC_6(VAR_10, sizeof(uint64_t), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_11.dom = VAR_0;
 VAR_11.nr_frames = VAR_10;
 FUNC_8(VAR_11.frame_list, VAR_9);

 VAR_12 = FUNC_1(VAR_4,
           &VAR_11, 1);
 if (VAR_12 == -VAR_2) {
  FUNC_5(VAR_9);
  return -VAR_2;
 }

 FUNC_0(VAR_12 || VAR_11.status);

 VAR_12 = FUNC_3(VAR_9, VAR_10,
        FUNC_7(FUNC_4()),
        &VAR_6);
 FUNC_0(VAR_12);
 FUNC_5(VAR_9);

 VAR_12 = FUNC_2(VAR_7, VAR_8,
        FUNC_4(),
        &VAR_5.addr);
 FUNC_0(VAR_12);

 return 0;
}
