
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hva_enc {int (* close ) (struct hva_ctx*) ;int name; } ;
struct hva_dev {int nb_of_instances; int ** instances; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct hva_ctx {size_t id; int name; TYPE_1__ fh; int ctrl_handler; struct hva_enc* enc; } ;
struct file {int private_data; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (struct hva_ctx*) ;
 struct hva_dev* FUNC_1 (struct hva_ctx*) ;
 int FUNC_2 (struct device*,char*,int ,int ) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct hva_ctx* FUNC_4 (int ) ;
 int FUNC_5 (struct hva_ctx*) ;
 int FUNC_6 (struct hva_ctx*) ;
 int FUNC_7 (struct hva_ctx*) ;
 int FUNC_8 (struct hva_ctx*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_0)
{
 struct hva_ctx *VAR_1 = FUNC_4(VAR_0->private_data);
 struct hva_dev *VAR_2 = FUNC_1(VAR_1);
 struct device *VAR_3 = FUNC_0(VAR_1);
 const struct hva_enc *VAR_4 = VAR_1->enc;

 if (VAR_4) {
  FUNC_2(VAR_3, "%s %s encoder closed\n", VAR_1->name, VAR_4->name);
  VAR_4->close(VAR_1);
  VAR_1->enc = ((void*)0);


  VAR_2->instances[VAR_1->id] = ((void*)0);
  VAR_2->nb_of_instances--;
 }


 FUNC_6(VAR_1);

 FUNC_12(VAR_1->fh.m2m_ctx);

 FUNC_9(&VAR_1->ctrl_handler);

 FUNC_10(&VAR_1->fh);
 FUNC_11(&VAR_1->fh);





 FUNC_3(VAR_3, "%s encoder instance released\n", VAR_1->name);

 FUNC_7(VAR_1);

 return 0;
}
