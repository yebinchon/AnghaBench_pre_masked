
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_rmap_irec {int rm_owner; } ;
struct xfs_fsmap {int fmr_flags; int fmr_owner; } ;


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
 int VAR_10 ;

__attribute__((used)) static int
FUNC_0(
 struct xfs_rmap_irec *VAR_11,
 struct xfs_fsmap *VAR_12)
{
 if (!(VAR_12->fmr_flags & VAR_1)) {
  VAR_11->rm_owner = VAR_12->fmr_owner;
  return 0;
 }

 switch (VAR_12->fmr_owner) {
 case 0:
 case -1ULL:
  VAR_11->rm_owner = 0;
  break;
 case 134:
  VAR_11->rm_owner = VAR_8;
  break;
 case 128:
  VAR_11->rm_owner = VAR_10;
  break;
 case 133:
  VAR_11->rm_owner = VAR_4;
  break;
 case 130:
  VAR_11->rm_owner = VAR_7;
  break;
 case 137:
  VAR_11->rm_owner = VAR_2;
  break;
 case 132:
  VAR_11->rm_owner = VAR_5;
  break;
 case 131:
  VAR_11->rm_owner = VAR_6;
  break;
 case 129:
  VAR_11->rm_owner = VAR_9;
  break;
 case 136:
  VAR_11->rm_owner = VAR_3;
  break;
 case 135:

 default:
  return -VAR_0;
 }
 return 0;
}
