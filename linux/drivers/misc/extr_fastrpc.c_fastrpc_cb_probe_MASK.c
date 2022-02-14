
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; int parent; } ;
struct platform_device {struct device dev; } ;
struct fastrpc_session_ctx {int used; int valid; int sid; struct device* dev; } ;
struct fastrpc_channel_ctx {size_t sesscount; int lock; struct fastrpc_session_ctx* session; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 struct fastrpc_channel_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct fastrpc_session_ctx*) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct fastrpc_session_ctx*,struct fastrpc_session_ctx*,int) ;
 scalar_t__ FUNC_7 (int ,char*,int*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct fastrpc_channel_ctx *VAR_3;
 struct fastrpc_session_ctx *VAR_4;
 struct device *VAR_5 = &VAR_2->dev;
 int VAR_6, VAR_7 = 0;
 unsigned long VAR_8;
 int VAR_9;

 VAR_3 = FUNC_2(VAR_5->parent);
 if (!VAR_3)
  return -VAR_0;

 FUNC_7(VAR_5->of_node, "qcom,nsessions", &VAR_7);

 FUNC_8(&VAR_3->lock, VAR_8);
 VAR_4 = &VAR_3->session[VAR_3->sesscount];
 VAR_4->used = 0;
 VAR_4->valid = 1;
 VAR_4->dev = VAR_5;
 FUNC_4(VAR_5, VAR_4);

 if (FUNC_7(VAR_5->of_node, "reg", &VAR_4->sid))
  FUNC_3(VAR_5, "FastRPC Session ID not specified in DT\n");

 if (VAR_7 > 0) {
  struct fastrpc_session_ctx *VAR_10;

  for (VAR_6 = 1; VAR_6 < VAR_7; VAR_6++) {
   if (VAR_3->sesscount++ >= VAR_1)
    break;
   VAR_10 = &VAR_3->session[VAR_3->sesscount];
   FUNC_6(VAR_10, VAR_4, sizeof(*VAR_10));
  }
 }
 VAR_3->sesscount++;
 FUNC_9(&VAR_3->lock, VAR_8);
 VAR_9 = FUNC_5(VAR_5, FUNC_0(32));
 if (VAR_9) {
  FUNC_1(VAR_5, "32-bit DMA enable failed\n");
  return VAR_9;
 }

 return 0;
}
