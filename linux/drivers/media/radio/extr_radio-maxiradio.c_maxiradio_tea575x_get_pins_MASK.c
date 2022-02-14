
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
 int FUNC_0 (int ) ;
 int VAR_3 ;

__attribute__((used)) static u8 FUNC_1(struct snd_tea575x *VAR_4)
{
 struct maxiradio *VAR_5 = VAR_4->private_data;
 u8 VAR_6 = FUNC_0(VAR_5->io);

 return ((VAR_6 & VAR_2) ? VAR_0 : 0) |
  ((VAR_6 & VAR_3) ? VAR_1 : 0);
}
