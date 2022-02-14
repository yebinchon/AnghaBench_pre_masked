
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_clk_ops {int dummy; } ;
struct v4l2_clk {struct v4l2_clk* dev_id; int list; int lock; int use_count; void* priv; struct v4l2_clk_ops const* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct v4l2_clk* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct v4l2_clk*) ;
 struct v4l2_clk* FUNC_4 (char const*,int ) ;
 struct v4l2_clk* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char const*) ;

struct v4l2_clk *FUNC_11(const struct v4l2_clk_ops *VAR_6,
       const char *VAR_7,
       void *VAR_8)
{
 struct v4l2_clk *VAR_9;
 int VAR_10;

 if (!VAR_6 || !VAR_7)
  return FUNC_0(-VAR_1);

 VAR_9 = FUNC_5(sizeof(struct v4l2_clk), VAR_3);
 if (!VAR_9)
  return FUNC_0(-VAR_2);

 VAR_9->dev_id = FUNC_4(VAR_7, VAR_3);
 if (!VAR_9->dev_id) {
  VAR_10 = -VAR_2;
  goto ealloc;
 }
 VAR_9->ops = VAR_6;
 VAR_9->priv = VAR_8;
 FUNC_2(&VAR_9->use_count, 0);
 FUNC_7(&VAR_9->lock);

 FUNC_8(&VAR_5);
 if (!FUNC_1(FUNC_10(VAR_7))) {
  FUNC_9(&VAR_5);
  VAR_10 = -VAR_0;
  goto eexist;
 }
 FUNC_6(&VAR_9->list, &VAR_4);
 FUNC_9(&VAR_5);

 return VAR_9;

eexist:
ealloc:
 FUNC_3(VAR_9->dev_id);
 FUNC_3(VAR_9);
 return FUNC_0(VAR_10);
}
