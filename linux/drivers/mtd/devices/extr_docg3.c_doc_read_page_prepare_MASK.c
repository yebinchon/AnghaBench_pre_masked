
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct docg3 {int device_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (struct docg3*,int) ;
 int FUNC_2 (struct docg3*,int) ;
 int FUNC_3 (struct docg3*,int ) ;
 int FUNC_4 (struct docg3*,int,int,int,int,int) ;
 int FUNC_5 (struct docg3*) ;
 int FUNC_6 (struct docg3*,int ) ;
 int FUNC_7 (struct docg3*) ;
 int FUNC_8 (struct docg3*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct docg3 *VAR_9, int VAR_10, int VAR_11,
     int VAR_12, int VAR_13)
{
 int VAR_14 = 0, VAR_15 = 0;

 FUNC_0("doc_read_page_prepare(blocks=(%d,%d), page=%d, ofsInPage=%d)\n",
  VAR_10, VAR_11, VAR_12, VAR_13);
 if (VAR_13 >= VAR_6)
  VAR_14 = 1;
 if (!VAR_14 && VAR_13 > (VAR_4 * 2))
  return -VAR_7;

 FUNC_6(VAR_9, VAR_9->device_id);
 VAR_15 = FUNC_5(VAR_9);
 if (VAR_15)
  goto err;


 VAR_15 = FUNC_4(VAR_9, VAR_10, VAR_11, VAR_12, VAR_14, VAR_13);
 if (VAR_15)
  goto err;

 FUNC_3(VAR_9, VAR_0);
 FUNC_1(VAR_9, 2);
 FUNC_7(VAR_9);

 FUNC_3(VAR_9, VAR_2);
 FUNC_1(VAR_9, 1);
 if (VAR_13 >= VAR_5 * 2)
  VAR_13 -= 2 * VAR_5;
 FUNC_2(VAR_9, VAR_13 >> 2);
 FUNC_1(VAR_9, 1);
 FUNC_7(VAR_9);

 FUNC_3(VAR_9, VAR_1);

 return 0;
err:
 FUNC_8(VAR_9, 0, VAR_3);
 FUNC_1(VAR_9, 2);
 return -VAR_8;
}
