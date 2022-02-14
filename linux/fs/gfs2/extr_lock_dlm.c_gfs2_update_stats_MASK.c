
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_lkstats {int* stats; } ;
typedef int s64 ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct gfs2_lkstats *VAR_0, unsigned VAR_1,
         s64 VAR_2)
{
 s64 VAR_3 = VAR_2 - VAR_0->stats[VAR_1];
 VAR_0->stats[VAR_1] += (VAR_3 >> 3);
 VAR_1++;
 VAR_0->stats[VAR_1] += (s64)(FUNC_0(VAR_3) - VAR_0->stats[VAR_1]) >> 2;
}
