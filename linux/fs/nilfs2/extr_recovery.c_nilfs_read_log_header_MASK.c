
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_blocksize; int ns_bdev; } ;
struct nilfs_segment_summary {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;


 struct buffer_head* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static struct buffer_head *
FUNC_1(struct the_nilfs *VAR_0, sector_t VAR_1,
        struct nilfs_segment_summary **VAR_2)
{
 struct buffer_head *VAR_3;

 VAR_3 = FUNC_0(VAR_0->ns_bdev, VAR_1, VAR_0->ns_blocksize);
 if (VAR_3)
  *VAR_2 = (struct nilfs_segment_summary *)VAR_3->b_data;
 return VAR_3;
}
