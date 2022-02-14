
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char u16 ;
struct mvpp2_prs_entry {int dummy; } ;
struct mvpp2_port {TYPE_2__* priv; int id; } ;
struct TYPE_4__ {TYPE_1__* prs_shadow; } ;
struct TYPE_3__ {scalar_t__ lu; int valid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,struct mvpp2_prs_entry*,int) ;
 int FUNC_3 (struct mvpp2_prs_entry*,int,unsigned char*,unsigned char*) ;

__attribute__((used)) static int FUNC_4(struct mvpp2_port *VAR_2, u16 VAR_3, u16 VAR_4)
{
 unsigned char VAR_5[2], VAR_6[2];
 struct mvpp2_prs_entry VAR_7;
 u16 VAR_8, VAR_9;
 int VAR_10;


 for (VAR_10 = FUNC_0(VAR_2->id);
      VAR_10 <= FUNC_1(VAR_2->id); VAR_10++) {
  if (!VAR_2->priv->prs_shadow[VAR_10].valid ||
      VAR_2->priv->prs_shadow[VAR_10].lu != VAR_1)
   continue;

  FUNC_2(VAR_2->priv, &VAR_7, VAR_10);

  FUNC_3(&VAR_7, 2, &VAR_5[0], &VAR_6[0]);
  FUNC_3(&VAR_7, 3, &VAR_5[1], &VAR_6[1]);

  VAR_8 = ((VAR_5[0] & 0xf) << 8) + VAR_5[1];
  VAR_9 = ((VAR_6[0] & 0xf) << 8) + VAR_6[1];

  if (VAR_8 != VAR_3 || VAR_9 != VAR_4)
   continue;

  return VAR_10;
 }

 return -VAR_0;
}
