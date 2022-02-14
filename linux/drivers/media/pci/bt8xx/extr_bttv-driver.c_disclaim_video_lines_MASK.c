
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ height; scalar_t__ top; } ;
struct TYPE_4__ {TYPE_1__ bounds; } ;
struct bttv_tvnorm {TYPE_2__ cropcap; } ;
struct bttv {size_t tvnorm; scalar_t__ crop_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct bttv_tvnorm* VAR_4 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void
FUNC_2(struct bttv *VAR_5)
{
 const struct bttv_tvnorm *VAR_6;
 u8 VAR_7;

 VAR_6 = &VAR_4[VAR_5->tvnorm];
 VAR_5->crop_start = VAR_6->cropcap.bounds.top
  + VAR_6->cropcap.bounds.height;





 VAR_7 = FUNC_0(VAR_0) | 0xc0;
 FUNC_1(VAR_7, VAR_0);
 FUNC_1(0xfe, VAR_1);
 FUNC_1(VAR_7, VAR_2);
 FUNC_1(0xfe, VAR_3);
}
