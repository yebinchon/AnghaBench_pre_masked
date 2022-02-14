
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vp7045_fe_state {int d; } ;
struct dvb_frontend {struct vp7045_fe_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_5,
     enum fe_status *VAR_6)
{
 struct vp7045_fe_state *VAR_7 = VAR_5->demodulator_priv;
 u8 VAR_8 = FUNC_0(VAR_7->d,0x00),
    VAR_9 = FUNC_0(VAR_7->d,0x01),
    VAR_10 = FUNC_0(VAR_7->d,0x03);

 *VAR_6 = 0;
 if (VAR_8 & (1 << 4))
  *VAR_6 |= VAR_0;
 if (VAR_8 & (1 << 1))
  *VAR_6 |= VAR_4;
 if (VAR_8 & (1 << 5))
  *VAR_6 |= VAR_1;
 if (VAR_9 & (1 << 1))
  *VAR_6 |= VAR_3;
 if (VAR_10 & (1 << 6))
  *VAR_6 |= VAR_2;

 if ((*VAR_6 & (VAR_0 | VAR_4 | VAR_3)) !=
   (VAR_0 | VAR_4 | VAR_3))
  *VAR_6 &= ~VAR_1;

 return 0;
}
