
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad2s1210_state {int resolution; int lock; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ad2s1210_state*,unsigned char) ;
 int FUNC_1 (struct ad2s1210_state*,unsigned char) ;
 int FUNC_2 (struct ad2s1210_state*) ;
 int FUNC_3 (struct ad2s1210_state*) ;
 int FUNC_4 (struct ad2s1210_state*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ad2s1210_state *VAR_5)
{
 unsigned char VAR_6;
 int VAR_7;

 FUNC_5(&VAR_5->lock);
 FUNC_2(VAR_5);

 VAR_7 = FUNC_1(VAR_5, VAR_2);
 if (VAR_7 < 0)
  goto error_ret;
 VAR_6 = VAR_0 & ~(VAR_3);
 VAR_6 |= (VAR_5->resolution - 10) >> 1;
 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (VAR_7 < 0)
  goto error_ret;
 VAR_7 = FUNC_0(VAR_5, VAR_2);
 if (VAR_7 < 0)
  goto error_ret;

 if (VAR_7 & VAR_1) {
  VAR_7 = -VAR_4;
  goto error_ret;
 }

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7 < 0)
  goto error_ret;
 VAR_7 = FUNC_3(VAR_5);
error_ret:
 FUNC_6(&VAR_5->lock);
 return VAR_7;
}
