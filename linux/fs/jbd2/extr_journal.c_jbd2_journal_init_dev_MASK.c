
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct block_device {int dummy; } ;
struct TYPE_5__ {int j_devname; int j_dev; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct block_device*,struct block_device*,unsigned long long,int,int) ;
 int FUNC_3 (int ,char,char) ;

journal_t *FUNC_4(struct block_device *VAR_0,
   struct block_device *VAR_1,
   unsigned long long VAR_2, int VAR_3, int VAR_4)
{
 journal_t *VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(VAR_5->j_dev, VAR_5->j_devname);
 FUNC_3(VAR_5->j_devname, '/', '!');
 FUNC_1(VAR_5);

 return VAR_5;
}
