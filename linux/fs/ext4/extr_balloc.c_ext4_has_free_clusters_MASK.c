
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_counter {int dummy; } ;
struct ext4_sb_info {int s_cluster_bits; int s_resgid; int s_resuid; int s_es; int s_resv_clusters; struct percpu_counter s_dirtyclusters_counter; struct percpu_counter s_freeclusters_counter; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct percpu_counter*) ;
 scalar_t__ FUNC_7 (struct percpu_counter*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct ext4_sb_info *VAR_5,
      s64 VAR_6, unsigned int VAR_7)
{
 s64 VAR_8, VAR_9, VAR_10, VAR_11;
 struct percpu_counter *VAR_12 = &VAR_5->s_freeclusters_counter;
 struct percpu_counter *VAR_13 = &VAR_5->s_dirtyclusters_counter;

 VAR_8 = FUNC_6(VAR_12);
 VAR_9 = FUNC_6(VAR_13);
 VAR_11 = FUNC_0(&VAR_5->s_resv_clusters);





 VAR_10 = (FUNC_3(VAR_5->s_es) >> VAR_5->s_cluster_bits) +
       VAR_11;

 if (VAR_8 - (VAR_6 + VAR_10 + VAR_9) <
     VAR_1) {
  VAR_8 = FUNC_7(VAR_12);
  VAR_9 = FUNC_7(VAR_13);
 }



 if (VAR_8 >= (VAR_10 + VAR_6 + VAR_9))
  return 1;


 if (FUNC_8(VAR_5->s_resuid, FUNC_2()) ||
     (!FUNC_4(VAR_5->s_resgid, VAR_4) && FUNC_5(VAR_5->s_resgid)) ||
     FUNC_1(VAR_0) ||
     (VAR_7 & VAR_3)) {

  if (VAR_8 >= (VAR_6 + VAR_9 +
          VAR_11))
   return 1;
 }

 if (VAR_7 & VAR_2) {
  if (VAR_8 >= (VAR_6 + VAR_9))
   return 1;
 }

 return 0;
}
