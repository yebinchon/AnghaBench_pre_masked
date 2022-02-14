
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_blocks_per_segment; unsigned long ns_nrsvsegs; int ns_ndirtyblks; int ns_sufile; } ;


 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (int ) ;

int FUNC_2(struct the_nilfs *VAR_0)
{
 unsigned long VAR_1, VAR_2;

 VAR_1 = FUNC_1(VAR_0->ns_sufile);
 VAR_2 = FUNC_0(&VAR_0->ns_ndirtyblks) /
  VAR_0->ns_blocks_per_segment + 1;

 return VAR_1 <= VAR_0->ns_nrsvsegs + VAR_2;
}
