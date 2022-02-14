
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_rmap_irec {int rm_owner; } ;
struct xfs_fsmap {int fmr_owner; int fmr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
__attribute__((used)) static int
FUNC_1(
 struct xfs_fsmap *VAR_10,
 struct xfs_rmap_irec *VAR_11)
{
 VAR_10->fmr_flags = 0;
 if (!FUNC_0(VAR_11->rm_owner)) {
  VAR_10->fmr_owner = VAR_11->rm_owner;
  return 0;
 }
 VAR_10->fmr_flags |= VAR_1;

 switch (VAR_11->rm_owner) {
 case 133:
  VAR_10->fmr_owner = VAR_5;
  break;
 case 130:
  VAR_10->fmr_owner = VAR_8;
  break;
 case 135:
  VAR_10->fmr_owner = VAR_2;
  break;
 case 132:
  VAR_10->fmr_owner = VAR_6;
  break;
 case 131:
  VAR_10->fmr_owner = VAR_7;
  break;
 case 128:
  VAR_10->fmr_owner = VAR_9;
  break;
 case 134:
  VAR_10->fmr_owner = VAR_3;
  break;
 case 129:
  VAR_10->fmr_owner = VAR_4;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
