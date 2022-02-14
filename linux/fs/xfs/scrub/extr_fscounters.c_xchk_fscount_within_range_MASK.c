
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct xfs_scrub {int mp; } ;
struct percpu_counter {int dummy; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__ const,scalar_t__) ;
 scalar_t__ FUNC_2 (struct percpu_counter*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,scalar_t__ const) ;
 int FUNC_4 (struct xfs_scrub*) ;

__attribute__((used)) static inline bool
FUNC_5(
 struct xfs_scrub *VAR_1,
 const int64_t VAR_2,
 struct percpu_counter *VAR_3,
 uint64_t VAR_4)
{
 int64_t VAR_5, VAR_6;
 int64_t VAR_7 = FUNC_2(VAR_3);

 FUNC_3(VAR_1->mp, VAR_4, VAR_7,
   VAR_2);


 if (VAR_7 < 0)
  return 0;


 if (VAR_7 == VAR_4)
  return 1;

 VAR_5 = FUNC_1(VAR_2, VAR_7);
 VAR_6 = FUNC_0(VAR_2, VAR_7);


 if (VAR_4 >= VAR_5 && VAR_4 <= VAR_6)
  return 1;
 if (VAR_6 - VAR_5 >= VAR_0) {
  FUNC_4(VAR_1);
  return 1;
 }

 return 0;
}
