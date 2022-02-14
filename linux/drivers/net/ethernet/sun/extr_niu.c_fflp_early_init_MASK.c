
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_parent {int flags; scalar_t__ plat_type; } ;
struct niu {int dev; struct niu_parent* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct niu*) ;
 int FUNC_1 (struct niu*,int ) ;
 int FUNC_2 (struct niu*) ;
 int FUNC_3 (struct niu*,int) ;
 int FUNC_4 (struct niu*) ;
 int FUNC_5 (struct niu*) ;
 int FUNC_6 (struct niu*,int ,int ,int ,char*,int) ;
 int FUNC_7 (struct niu*,unsigned long) ;
 int FUNC_8 (struct niu*,unsigned long) ;
 int FUNC_9 (int ,int ) ;
 int VAR_5 ;
 int FUNC_10 (struct niu*) ;
 int FUNC_11 (struct niu*) ;
 int FUNC_12 (struct niu*) ;

__attribute__((used)) static int FUNC_13(struct niu *VAR_6)
{
 struct niu_parent *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 FUNC_7(VAR_6, VAR_8);

 VAR_7 = VAR_6->parent;
 VAR_9 = 0;
 if (!(VAR_7->flags & VAR_3)) {
  if (VAR_6->parent->plat_type != VAR_4) {
   FUNC_4(VAR_6);
   FUNC_5(VAR_6);
   VAR_9 = FUNC_0(VAR_6);
   if (VAR_9) {
    FUNC_6(VAR_6, VAR_5, VAR_2, VAR_6->dev,
          "fflp_disable_all_partitions failed, err=%d\n",
          VAR_9);
    goto out;
   }
  }

  VAR_9 = FUNC_10(VAR_6);
  if (VAR_9) {
   FUNC_6(VAR_6, VAR_5, VAR_2, VAR_6->dev,
         "tcam_early_init failed, err=%d\n", VAR_9);
   goto out;
  }
  FUNC_3(VAR_6, 1);
  FUNC_1(VAR_6, 0);
  FUNC_9(VAR_0, 0);
  FUNC_9(VAR_1, 0);

  VAR_9 = FUNC_11(VAR_6);
  if (VAR_9) {
   FUNC_6(VAR_6, VAR_5, VAR_2, VAR_6->dev,
         "tcam_flush_all failed, err=%d\n", VAR_9);
   goto out;
  }
  if (VAR_6->parent->plat_type != VAR_4) {
   VAR_9 = FUNC_2(VAR_6);
   if (VAR_9) {
    FUNC_6(VAR_6, VAR_5, VAR_2, VAR_6->dev,
          "fflp_hash_clear failed, err=%d\n",
          VAR_9);
    goto out;
   }
  }

  FUNC_12(VAR_6);

  VAR_7->flags |= VAR_3;
 }
out:
 FUNC_8(VAR_6, VAR_8);
 return VAR_9;
}
