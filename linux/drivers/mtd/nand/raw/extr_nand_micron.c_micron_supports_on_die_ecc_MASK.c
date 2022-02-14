
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int strength; } ;
struct TYPE_8__ {TYPE_3__ eccreq; } ;
struct TYPE_6__ {int len; int* data; } ;
struct TYPE_5__ {int onfi; } ;
struct nand_chip {TYPE_4__ base; TYPE_2__ id; TYPE_1__ parameters; } ;
typedef int id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nand_chip*,int) ;
 int FUNC_1 (struct nand_chip*,int ,int*,int) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_5)
{
 u8 VAR_6[5];
 int VAR_7;

 if (!VAR_5->parameters.onfi)
  return VAR_4;

 if (FUNC_2(&VAR_5->base) != 1)
  return VAR_4;




 if (VAR_5->base.eccreq.strength != 4 && VAR_5->base.eccreq.strength != 8)
  return VAR_4;


 if (VAR_5->id.len != 5 ||
     (VAR_5->id.data[4] & VAR_1) != 0x2)
  return VAR_4;
 VAR_7 = FUNC_0(VAR_5, 1);
 if (VAR_7)
  return VAR_4;

 VAR_7 = FUNC_1(VAR_5, 0, VAR_6, sizeof(VAR_6));
 if (VAR_7)
  return VAR_4;

 VAR_7 = FUNC_0(VAR_5, 0);
 if (VAR_7)
  return VAR_4;

 if (!(VAR_6[4] & VAR_0))
  return VAR_4;

 VAR_7 = FUNC_1(VAR_5, 0, VAR_6, sizeof(VAR_6));
 if (VAR_7)
  return VAR_4;

 if (VAR_6[4] & VAR_0)
  return VAR_2;




 if (VAR_5->base.eccreq.strength != 4 && VAR_5->base.eccreq.strength != 8)
  return VAR_4;

 return VAR_3;
}
