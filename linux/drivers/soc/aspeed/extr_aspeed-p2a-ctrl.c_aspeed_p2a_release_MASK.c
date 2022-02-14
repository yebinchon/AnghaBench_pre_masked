
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct inode {int dummy; } ;
struct file {struct aspeed_p2a_user* private_data; } ;
struct aspeed_p2a_user {scalar_t__ read; scalar_t__* readwrite; TYPE_3__* parent; } ;
struct TYPE_6__ {scalar_t__ readers; scalar_t__* readerwriters; int tracking; int regmap; TYPE_2__* config; } ;
struct TYPE_5__ {TYPE_1__* regions; } ;
struct TYPE_4__ {int bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct aspeed_p2a_user*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4;
 u32 VAR_5 = 0;
 bool VAR_6 = 0;
 struct aspeed_p2a_user *VAR_7 = VAR_3->private_data;




 FUNC_2(&VAR_7->parent->tracking);

 VAR_7->parent->readers -= VAR_7->read;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_7->parent->readerwriters[VAR_4] -= VAR_7->readwrite[VAR_4];

  if (VAR_7->parent->readerwriters[VAR_4] > 0)
   VAR_6 = 1;
  else
   VAR_5 |= VAR_7->parent->config->regions[VAR_4].bit;
 }
 FUNC_4(VAR_7->parent->regmap, VAR_1, VAR_5, VAR_5);




 if (!VAR_6 && VAR_7->parent->readers == 0)
  FUNC_0(VAR_7->parent);

 FUNC_3(&VAR_7->parent->tracking);

 FUNC_1(VAR_7);

 return 0;
}
