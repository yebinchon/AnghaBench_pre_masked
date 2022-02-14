
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ofdpa_port {int pport; } ;
struct ofdpa_fdb_learn_work {int flags; int work; int vid; int addr; struct ofdpa_port* ofdpa_port; } ;
typedef enum rocker_of_dpa_table_id { ____Placeholder_rocker_of_dpa_table_id } rocker_of_dpa_table_id ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int const*) ;
 struct ofdpa_fdb_learn_work* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ofdpa_port*,int,int const*,int *,int ,int ,int,int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct ofdpa_port*) ;
 int FUNC_6 (struct ofdpa_port*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ofdpa_port *VAR_6,
    int VAR_7, const u8 *VAR_8, __be16 VAR_9)
{
 struct ofdpa_fdb_learn_work *VAR_10;
 enum rocker_of_dpa_table_id VAR_11 =
   VAR_4;
 u32 VAR_12 = VAR_6->pport;
 u32 VAR_13 = 0;
 u32 VAR_14 = VAR_3;
 bool VAR_15 = 0;
 int VAR_16;

 if (FUNC_5(VAR_6))
  VAR_14 = FUNC_1(VAR_9, VAR_12);

 if (!(VAR_7 & VAR_2)) {
  VAR_16 = FUNC_4(VAR_6, VAR_7, VAR_8,
         ((void*)0), VAR_9, VAR_13, VAR_11,
         VAR_14, VAR_15);
  if (VAR_16)
   return VAR_16;
 }

 if (!FUNC_5(VAR_6))
  return 0;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_0(&VAR_10->work, VAR_5);

 VAR_10->ofdpa_port = VAR_6;
 VAR_10->flags = VAR_7;
 FUNC_2(VAR_10->addr, VAR_8);
 VAR_10->vid = FUNC_6(VAR_6, VAR_9);

 FUNC_7(&VAR_10->work);
 return 0;
}
