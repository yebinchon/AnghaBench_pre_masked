
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct aspeed_video {int flags; scalar_t__ sequence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aspeed_video*,int ) ;
 int FUNC_1 (struct aspeed_video*) ;
 int FUNC_2 (int ,int *) ;
 struct aspeed_video* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_2,
     unsigned int VAR_3)
{
 int VAR_4;
 struct aspeed_video *VAR_5 = FUNC_3(VAR_2);

 VAR_5->sequence = 0;

 VAR_4 = FUNC_1(VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_5, VAR_0);
  return VAR_4;
 }

 FUNC_2(VAR_1, &VAR_5->flags);
 return 0;
}
