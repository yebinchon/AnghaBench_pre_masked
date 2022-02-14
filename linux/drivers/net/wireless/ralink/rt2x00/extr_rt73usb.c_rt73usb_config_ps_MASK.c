
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00lib_conf {TYPE_1__* conf; } ;
struct rt2x00_dev {int beacon_int; } ;
typedef enum dev_state { ____Placeholder_dev_state } dev_state ;
struct TYPE_2__ {int flags; int listen_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_12,
    struct rt2x00lib_conf *VAR_13)
{
 enum dev_state VAR_14 =
     (VAR_13->conf->flags & VAR_0) ?
  VAR_8 : VAR_7;
 u32 VAR_15;

 if (VAR_14 == VAR_8) {
  VAR_15 = FUNC_1(VAR_12, VAR_1);
  FUNC_0(&VAR_15, VAR_3,
       VAR_12->beacon_int - 10);
  FUNC_0(&VAR_15, VAR_4,
       VAR_13->conf->listen_interval - 1);
  FUNC_0(&VAR_15, VAR_5, 5);


  FUNC_0(&VAR_15, VAR_2, 0);
  FUNC_2(VAR_12, VAR_1, VAR_15);

  FUNC_0(&VAR_15, VAR_2, 1);
  FUNC_2(VAR_12, VAR_1, VAR_15);

  FUNC_3(VAR_12, VAR_9, 0,
         VAR_10, VAR_6);
 } else {
  VAR_15 = FUNC_1(VAR_12, VAR_1);
  FUNC_0(&VAR_15, VAR_3, 0);
  FUNC_0(&VAR_15, VAR_4, 0);
  FUNC_0(&VAR_15, VAR_2, 0);
  FUNC_0(&VAR_15, VAR_5, 0);
  FUNC_2(VAR_12, VAR_1, VAR_15);

  FUNC_3(VAR_12, VAR_9, 0,
         VAR_11, VAR_6);
 }
}
