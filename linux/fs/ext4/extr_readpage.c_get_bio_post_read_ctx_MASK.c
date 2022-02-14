
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct bio_post_read_ctx {unsigned int enabled_steps; struct bio* bio; } ;
struct bio {struct bio_post_read_ctx* bi_private; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 struct bio_post_read_ctx* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct inode*,int ) ;
 struct bio_post_read_ctx* FUNC_4 (int ,int ) ;

__attribute__((used)) static struct bio_post_read_ctx *FUNC_5(struct inode *VAR_5,
             struct bio *VAR_6,
             pgoff_t VAR_7)
{
 unsigned int VAR_8 = 0;
 struct bio_post_read_ctx *VAR_9 = ((void*)0);

 if (FUNC_1(VAR_5) && FUNC_2(VAR_5->i_mode))
  VAR_8 |= 1 << VAR_2;

 if (FUNC_3(VAR_5, VAR_7))
  VAR_8 |= 1 << VAR_3;

 if (VAR_8) {
  VAR_9 = FUNC_4(VAR_4, VAR_1);
  if (!VAR_9)
   return FUNC_0(-VAR_0);
  VAR_9->bio = VAR_6;
  VAR_9->enabled_steps = VAR_8;
  VAR_6->bi_private = VAR_9;
 }
 return VAR_9;
}
