
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct genwqe_dev {int dummy; } ;
struct ddcb_queue {int ddcb_max; int IO_QUEUE_OFFSET; struct ddcb* ddcb_vaddr; } ;
struct ddcb {int icrc_hsi_shi_32; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct genwqe_dev*,int ,int) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (struct ddcb*) ;
 int FUNC_3 (struct ddcb*) ;
 int FUNC_4 (struct ddcb*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct genwqe_dev *VAR_4, struct ddcb_queue *VAR_5,
   struct ddcb *VAR_6, int VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;
 struct ddcb *VAR_10;
 __be32 VAR_11, VAR_12, VAR_13;
 u64 VAR_14;






 FUNC_4(VAR_6);


 VAR_9 = (VAR_7 == 0) ? VAR_5->ddcb_max - 1 : VAR_7 - 1;
 VAR_10 = &VAR_5->ddcb_vaddr[VAR_9];






 FUNC_2(VAR_6);
 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  VAR_11 = VAR_10->icrc_hsi_shi_32;


  if ((VAR_11 & VAR_0) != 0x00000000)
   break;

  VAR_12 = (VAR_11 | VAR_1);

  FUNC_5();
  VAR_13 = FUNC_1(&VAR_10->icrc_hsi_shi_32, VAR_11, VAR_12);

  if (VAR_13 == VAR_11)
   return VAR_2;
 }


 FUNC_3(VAR_6);
 VAR_14 = (u64)VAR_7 << 8;

 FUNC_5();
 FUNC_0(VAR_4, VAR_5->IO_QUEUE_OFFSET, VAR_14);

 return VAR_3;
}
