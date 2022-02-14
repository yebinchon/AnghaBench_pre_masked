
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xc4000_priv {scalar_t__ video_standard; int lock; } ;
struct dvb_frontend {struct xc4000_priv* tuner_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct xc4000_priv*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_6, u16 *VAR_7)
{
 struct xc4000_priv *VAR_8 = VAR_6->tuner_priv;
 u16 VAR_9 = 0;
 int VAR_10;

 FUNC_0(&VAR_8->lock);
 VAR_10 = FUNC_3(VAR_8, VAR_5, &VAR_9);
 FUNC_1(&VAR_8->lock);

 if (VAR_10 < 0)
  goto ret;




 FUNC_2("Signal strength: -%ddB (%05d)\n", VAR_9 >> 8, VAR_9);


 if ((VAR_8->video_standard == VAR_0) ||
     (VAR_8->video_standard == VAR_1) ||
     (VAR_8->video_standard == VAR_2) ||
     (VAR_8->video_standard == VAR_3))
  goto digital;






 FUNC_0(&VAR_8->lock);
 VAR_10 = FUNC_3(VAR_8, VAR_4, &VAR_9);
 FUNC_1(&VAR_8->lock);

 FUNC_2("Noise level: %ddB (%05d)\n", VAR_9 >> 8, VAR_9);


 if (VAR_9 >= 0x2000) {
  VAR_9 = 0;
 } else {
  VAR_9 = (~VAR_9 << 3) & 0xffff;
 }

 goto ret;




digital:

 if (VAR_9 <= 0x3200) {
  VAR_9 = 0xffff;

 } else if (VAR_9 >= 0x713A) {
  VAR_9 = 0;
 } else {
  VAR_9 = ~(VAR_9 - 0x3200) << 2;
 }

ret:
 *VAR_7 = VAR_9;

 return VAR_10;
}
