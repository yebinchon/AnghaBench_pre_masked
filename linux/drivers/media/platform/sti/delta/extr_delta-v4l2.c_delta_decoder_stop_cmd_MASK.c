
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_frame {int dts; int index; } ;
struct delta_dev {int dev; } ;
struct delta_dec {int dummy; } ;
struct delta_ctx {scalar_t__ state; int name; struct delta_dev* dev; struct delta_dec* dec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct delta_dec const*,int ,struct delta_ctx*,...) ;
 int FUNC_1 (struct delta_ctx*,struct delta_frame*) ;
 int FUNC_2 (struct delta_ctx*,struct delta_frame*,int ) ;
 int FUNC_3 (struct delta_ctx*,struct delta_frame**) ;
 int FUNC_4 (struct delta_ctx*,int *) ;
 int FUNC_5 (int ,char*,int ,...) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct delta_ctx *VAR_6, void *VAR_7)
{
 const struct delta_dec *VAR_8 = VAR_6->dec;
 struct delta_dev *VAR_9 = VAR_6->dev;
 struct delta_frame *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 FUNC_5(VAR_9->dev, "%s EOS received\n", VAR_6->name);

 if (VAR_6->state != VAR_1)
  return 0;


 FUNC_0(VAR_8, VAR_4, VAR_6);


 while (1) {
  VAR_10 = ((void*)0);
  VAR_11 = FUNC_0(VAR_8, VAR_5, VAR_6, &VAR_10);
  if (VAR_11 == -VAR_3) {

   break;
  }
  if (VAR_10) {
   FUNC_5(VAR_9->dev, "%s drain frame[%d]\n",
    VAR_6->name, VAR_10->index);


   FUNC_4(VAR_6, &VAR_10->dts);


   FUNC_2(VAR_6, VAR_10, 0);
  }
 }


 VAR_11 = FUNC_3(VAR_6, &VAR_10);
 if (VAR_11)
  goto delay_eos;


 FUNC_1(VAR_6, VAR_10);

 VAR_6->state = VAR_0;

 return 0;

delay_eos:






 VAR_6->state = VAR_2;
 FUNC_5(VAR_9->dev, "%s EOS delayed\n", VAR_6->name);

 return 0;
}
