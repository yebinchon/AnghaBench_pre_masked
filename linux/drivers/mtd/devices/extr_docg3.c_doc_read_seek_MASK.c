
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct docg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int,int,int,int,int) ;
 int FUNC_1 (struct docg3*,int) ;
 int FUNC_2 (struct docg3*,int ) ;
 int FUNC_3 (struct docg3*,int ) ;
 int FUNC_4 (struct docg3*) ;
 int FUNC_5 (struct docg3*) ;
 int FUNC_6 (struct docg3*,int) ;

__attribute__((used)) static int FUNC_7(struct docg3 *VAR_9, int VAR_10, int VAR_11, int VAR_12,
    int VAR_13, int VAR_14)
{
 int VAR_15, VAR_16 = 0;

 FUNC_0("doc_seek(blocks=(%d,%d), page=%d, ofs=%d, wear=%d)\n",
  VAR_10, VAR_11, VAR_12, VAR_14, VAR_13);

 if (!VAR_13 && (VAR_14 < 2 * VAR_5)) {
  FUNC_3(VAR_9, VAR_7);
  FUNC_2(VAR_9, VAR_3);
  FUNC_1(VAR_9, 2);
 } else {
  FUNC_3(VAR_9, VAR_8);
  FUNC_2(VAR_9, VAR_4);
  FUNC_1(VAR_9, 2);
 }

 FUNC_5(VAR_9);
 if (VAR_13)
  VAR_16 = FUNC_4(VAR_9);
 if (VAR_16)
  goto out;

 FUNC_3(VAR_9, VAR_6);
 VAR_15 = (VAR_10 << VAR_0) + (VAR_12 & VAR_1);
 FUNC_2(VAR_9, VAR_2);
 FUNC_6(VAR_9, VAR_15);

 VAR_15 = (VAR_11 << VAR_0) + (VAR_12 & VAR_1);
 FUNC_2(VAR_9, VAR_2);
 FUNC_6(VAR_9, VAR_15);
 FUNC_1(VAR_9, 1);

out:
 return VAR_16;
}
