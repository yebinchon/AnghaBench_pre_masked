
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dvb_frontend {struct ddb_input* sec_priv; } ;
struct ddb_port {size_t lnr; struct ddb_dvb* dvb; struct ddb* dev; } ;
struct ddb_input {int nr; struct ddb_port* port; } ;
struct ddb_dvb {int voltage; size_t input; int tone; } ;
struct ddb {TYPE_2__* link; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;
struct TYPE_3__ {int voltages; int fmode; unsigned long long* voltage; int lock; } ;
struct TYPE_4__ {TYPE_1__ lnb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ddb*,size_t,int,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_5, enum fe_sec_voltage VAR_6)
{
 struct ddb_input *VAR_7 = VAR_5->sec_priv;
 struct ddb_port *VAR_8 = VAR_7->port;
 struct ddb *VAR_9 = VAR_8->dev;
 struct ddb_dvb *VAR_10 = &VAR_8->dvb[VAR_7->nr & 1];
 int VAR_11 = 0;
 u32 VAR_12, VAR_13 = VAR_9->link[VAR_8->lnr].lnb.voltages;
 int VAR_14 = 0;
 u32 VAR_15 = VAR_9->link[VAR_8->lnr].lnb.fmode;

 FUNC_2(&VAR_9->link[VAR_8->lnr].lnb.lock);
 VAR_10->voltage = VAR_6;

 switch (VAR_15) {
 case 3:
 default:
 case 0:
  if (VAR_15 == 3)
   FUNC_1(VAR_5, 0);
  if (VAR_6 == VAR_3)
   VAR_9->link[VAR_8->lnr].lnb.voltage[VAR_10->input] &=
    ~(1ULL << VAR_7->nr);
  else
   VAR_9->link[VAR_8->lnr].lnb.voltage[VAR_10->input] |=
    (1ULL << VAR_7->nr);

  VAR_14 = FUNC_0(VAR_9, VAR_8->lnr, VAR_10->input, VAR_6);
  break;
 case 1:
 case 2:
  if (VAR_6 == VAR_3)
   VAR_9->link[VAR_8->lnr].lnb.voltages &=
    ~(1ULL << VAR_7->nr);
  else
   VAR_9->link[VAR_8->lnr].lnb.voltages |=
    (1ULL << VAR_7->nr);

  VAR_12 = VAR_9->link[VAR_8->lnr].lnb.voltages;

  if (VAR_4) {
   if (VAR_10->tone == VAR_0)
    VAR_11 |= 2;
   if (VAR_10->voltage == VAR_2)
    VAR_11 |= 1;
  } else {
   if (VAR_10->tone == VAR_0)
    VAR_11 |= 1;
   if (VAR_10->voltage == VAR_2)
    VAR_11 |= 2;
  }
  VAR_14 = FUNC_1(VAR_5, VAR_11);

  if (VAR_12 != VAR_13) {
   if (VAR_12) {
    FUNC_0(
     VAR_9, VAR_8->lnr,
     0, VAR_1);
    if (VAR_15 == 1) {
     FUNC_0(
      VAR_9, VAR_8->lnr,
      0, VAR_1);
     if (VAR_4) {
      FUNC_0(
       VAR_9, VAR_8->lnr,
       1, VAR_2);
      FUNC_0(
       VAR_9, VAR_8->lnr,
       2, VAR_1);
     } else {
      FUNC_0(
       VAR_9, VAR_8->lnr,
       1, VAR_1);
      FUNC_0(
       VAR_9, VAR_8->lnr,
       2, VAR_2);
     }
     FUNC_0(
      VAR_9, VAR_8->lnr,
      3, VAR_2);
    }
   } else {
    FUNC_0(
     VAR_9, VAR_8->lnr,
     0, VAR_3);
    if (VAR_15 == 1) {
     FUNC_0(
      VAR_9, VAR_8->lnr,
      1, VAR_3);
     FUNC_0(
      VAR_9, VAR_8->lnr,
      2, VAR_3);
     FUNC_0(
      VAR_9, VAR_8->lnr,
      3, VAR_3);
    }
   }
  }
  break;
 }
 FUNC_3(&VAR_9->link[VAR_8->lnr].lnb.lock);
 return VAR_14;
}
