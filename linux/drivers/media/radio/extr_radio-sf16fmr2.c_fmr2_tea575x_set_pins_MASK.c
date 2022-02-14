
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_tea575x {struct fmr2* private_data; } ;
struct fmr2 {int io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_tea575x *VAR_6, u8 VAR_7)
{
 struct fmr2 *VAR_8 = VAR_6->private_data;
 u8 VAR_9 = 0;

 VAR_9 |= (VAR_7 & VAR_4) ? VAR_1 : 0;
 VAR_9 |= (VAR_7 & VAR_3) ? VAR_0 : 0;

 VAR_9 |= (VAR_7 & VAR_5) ? 0 : VAR_2 | VAR_1;

 FUNC_0(VAR_9, VAR_8->io);
}
