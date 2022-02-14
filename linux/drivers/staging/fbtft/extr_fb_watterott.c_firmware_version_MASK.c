
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_2__ {int (* read ) (struct fbtft_par*,char*,int) ;} ;
struct fbtft_par {TYPE_1__ fbtftops; } ;


 int VAR_0 ;
 int FUNC_0 (struct fbtft_par*,char*,int) ;
 int FUNC_1 (struct fbtft_par*,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct fbtft_par *VAR_1)
{
 u8 VAR_2[4] = {0, };

 FUNC_1(VAR_1, VAR_0);
 VAR_1->fbtftops.read(VAR_1, VAR_2, 4);
 if (VAR_2[1] != '.')
  return 0;

 return (VAR_2[0] - '0') << 8 | (VAR_2[2] - '0') << 4 | (VAR_2[3] - '0');
}
