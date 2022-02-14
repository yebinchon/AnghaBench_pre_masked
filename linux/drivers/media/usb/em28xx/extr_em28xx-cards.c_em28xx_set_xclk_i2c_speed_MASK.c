
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct em28xx_board {int xclk; int i2c_speed; } ;
struct TYPE_2__ {int is_em2800; } ;
struct em28xx {size_t model; int i2c_speed; TYPE_1__ board; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct em28xx_board* VAR_6 ;
 int FUNC_0 (struct em28xx*,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct em28xx *VAR_7)
{
 const struct em28xx_board *VAR_8 = &VAR_6[VAR_7->model];
 u8 VAR_9 = VAR_8->xclk, VAR_10 = VAR_8->i2c_speed;





 if (!VAR_9)
  VAR_9 = VAR_5 |
         VAR_4;

 FUNC_0(VAR_7, VAR_3, VAR_9);

 if (!VAR_10)
  VAR_10 = VAR_0 |
       VAR_1;

 VAR_7->i2c_speed = VAR_10 & 0x03;

 if (!VAR_7->board.is_em2800)
  FUNC_0(VAR_7, VAR_2, VAR_10);
 FUNC_1(50);
}
