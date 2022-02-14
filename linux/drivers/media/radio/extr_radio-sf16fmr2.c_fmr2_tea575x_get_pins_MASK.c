
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
 int FUNC_0 (int ) ;

__attribute__((used)) static u8 FUNC_1(struct snd_tea575x *VAR_4)
{
 struct fmr2 *VAR_5 = VAR_4->private_data;
 u8 VAR_6 = FUNC_0(VAR_5->io);

 return ((VAR_6 & VAR_0) ? VAR_2 : 0) |
  ((VAR_6 & VAR_1) ? VAR_3 : 0);
}
