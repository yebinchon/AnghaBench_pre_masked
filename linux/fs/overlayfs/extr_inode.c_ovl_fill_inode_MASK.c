
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {unsigned long i_ino; int i_mode; int * i_op; int * i_fop; TYPE_1__* i_mapping; int i_default_acl; int i_acl; int i_flags; int i_sb; } ;
typedef int dev_t ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (struct inode*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_10, umode_t VAR_11, dev_t VAR_12,
      unsigned long VAR_13, int VAR_14)
{
 int VAR_15 = FUNC_4(VAR_10->i_sb);
 if (FUNC_3(VAR_10->i_sb) || VAR_15) {
  VAR_10->i_ino = VAR_13;
  if (VAR_15 && VAR_14 && !(VAR_13 >> (64 - VAR_15)))
   VAR_10->i_ino |= (unsigned long)VAR_14 << (64 - VAR_15);
 } else {
  VAR_10->i_ino = FUNC_0();
 }
 VAR_10->i_mode = VAR_11;
 VAR_10->i_flags |= VAR_2;




 FUNC_2(VAR_10);

 switch (VAR_11 & VAR_1) {
 case 128:
  VAR_10->i_op = &VAR_6;
  VAR_10->i_fop = &VAR_7;
  VAR_10->i_mapping->a_ops = &VAR_3;
  break;

 case 130:
  VAR_10->i_op = &VAR_4;
  VAR_10->i_fop = &VAR_5;
  break;

 case 129:
  VAR_10->i_op = &VAR_9;
  break;

 default:
  VAR_10->i_op = &VAR_8;
  FUNC_1(VAR_10, VAR_11, VAR_12);
  break;
 }
}
