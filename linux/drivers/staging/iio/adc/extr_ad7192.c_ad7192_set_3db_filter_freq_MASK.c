
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7192_state {int conf; int sd; int mode; void* f_order; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int*) ;
 unsigned int VAR_7 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (struct ad7192_state*,int*) ;
 int FUNC_3 (int *,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct ad7192_state *VAR_8,
          int VAR_9, int VAR_10)
{
 int VAR_11[4], VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;
 int VAR_17 = 0;

 VAR_16 = VAR_7;
 VAR_14 = VAR_9 * 1000 + VAR_10;

 FUNC_2(VAR_8, VAR_11);

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_11); VAR_12++) {
  VAR_15 = FUNC_1(VAR_14 - VAR_11[VAR_12]);
  if (VAR_15 < VAR_16) {
   VAR_16 = VAR_15;
   VAR_17 = VAR_12;
  }
 }

 switch (VAR_17) {
 case 0:
  VAR_8->f_order = VAR_6;
  VAR_8->mode &= ~VAR_1;

  VAR_8->conf |= VAR_0;
  break;
 case 1:
  VAR_8->f_order = VAR_5;
  VAR_8->mode |= VAR_1;

  VAR_8->conf |= VAR_0;
  break;
 case 2:
  VAR_8->f_order = VAR_2;
  VAR_8->mode &= ~VAR_1;

  VAR_8->conf &= ~VAR_0;
  break;
 case 3:
  VAR_8->f_order = VAR_2;
  VAR_8->mode |= VAR_1;

  VAR_8->conf &= ~VAR_0;
  break;
 }

 VAR_13 = FUNC_3(&VAR_8->sd, VAR_4, 3, VAR_8->mode);
 if (VAR_13 < 0)
  return VAR_13;

 return FUNC_3(&VAR_8->sd, VAR_3, 3, VAR_8->conf);
}
