
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_frontend {int dummy; } ;
struct dm1105_dev {size_t boardnr; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;
struct TYPE_3__ {int off; int mask; int v13; int v18; } ;
struct TYPE_4__ {TYPE_1__ lnb; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct dm1105_dev*,int ,int ) ;
 int FUNC_1 (struct dm1105_dev*,int ,int) ;
 struct dm1105_dev* FUNC_2 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_3,
         enum fe_sec_voltage VAR_4)
{
 struct dm1105_dev *VAR_5 = FUNC_2(VAR_3);

 FUNC_1(VAR_5, VAR_2[VAR_5->boardnr].lnb.mask, 1);
 if (VAR_4 == VAR_1)
  FUNC_0(VAR_5,
    VAR_2[VAR_5->boardnr].lnb.mask,
    VAR_2[VAR_5->boardnr].lnb.v18);
 else if (VAR_4 == VAR_0)
  FUNC_0(VAR_5,
    VAR_2[VAR_5->boardnr].lnb.mask,
    VAR_2[VAR_5->boardnr].lnb.v13);
 else
  FUNC_0(VAR_5,
    VAR_2[VAR_5->boardnr].lnb.mask,
    VAR_2[VAR_5->boardnr].lnb.off);

 return 0;
}
