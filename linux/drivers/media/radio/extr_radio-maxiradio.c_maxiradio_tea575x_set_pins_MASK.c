
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_tea575x {struct maxiradio* private_data; } ;
struct maxiradio {int io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct snd_tea575x *VAR_7, u8 VAR_8)
{
 struct maxiradio *VAR_9 = VAR_7->private_data;
 u8 VAR_10 = 0;

 VAR_10 |= (VAR_8 & VAR_1) ? VAR_4 : 0;
 VAR_10 |= (VAR_8 & VAR_0) ? VAR_3 : 0;
 VAR_10 |= (VAR_8 & VAR_2) ? VAR_6 : 0;
 VAR_10 |= VAR_5;

 FUNC_0(VAR_10, VAR_9->io);
}
