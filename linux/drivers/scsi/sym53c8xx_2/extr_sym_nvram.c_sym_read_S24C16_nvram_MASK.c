
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sym_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sym_device*,int ) ;
 int FUNC_1 (struct sym_device*,int ,int) ;
 int FUNC_2 (struct sym_device*,int*,int,int*,int*) ;
 int FUNC_3 (struct sym_device*,int ,int*,int ) ;
 int FUNC_4 (struct sym_device*,int*) ;
 int FUNC_5 (struct sym_device*,int*) ;
 int FUNC_6 (struct sym_device*,int*,int,int*,int*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct sym_device *VAR_4, int VAR_5, u_char *VAR_6, int VAR_7)
{
 u_char VAR_8, VAR_9;
 u_char VAR_10, VAR_11;
 u_char VAR_12;
 int VAR_13 = 1;
 int VAR_14;


 VAR_11 = FUNC_0(VAR_4, VAR_3);
 VAR_10 = FUNC_0(VAR_4, VAR_2);
 VAR_8 = VAR_10 & 0x1c;


 FUNC_1(VAR_4, VAR_3, VAR_11);
 FUNC_1(VAR_4, VAR_2, VAR_8);


 VAR_9 = VAR_11;
 FUNC_3(VAR_4, 0, &VAR_9, VAR_1);
 FUNC_3(VAR_4, 0, &VAR_9, VAR_0);


 FUNC_5(VAR_4, &VAR_9);


 FUNC_4(VAR_4, &VAR_9);


 FUNC_6(VAR_4, &VAR_12,
  0xa0 | ((VAR_5 >> 7) & 0x0e), &VAR_9, &VAR_8);
 if (VAR_12 & 0x01)
  goto out;


 FUNC_6(VAR_4, &VAR_12,
  VAR_5 & 0xff, &VAR_9, &VAR_8);
 if (VAR_12 & 0x01)
  goto out;


 FUNC_4(VAR_4, &VAR_9);


 FUNC_6(VAR_4, &VAR_12,
  0xa1 | ((VAR_5 >> 7) & 0x0e), &VAR_9, &VAR_8);
 if (VAR_12 & 0x01)
  goto out;


 VAR_8 |= 0x01;
 FUNC_1(VAR_4, VAR_2, VAR_8);


 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
  FUNC_2(VAR_4, &VAR_6[VAR_14], (VAR_14 == (VAR_7-1)), &VAR_9, &VAR_8);


 VAR_8 &= 0xfe;
 FUNC_1(VAR_4, VAR_2, VAR_8);
 FUNC_5(VAR_4, &VAR_9);
 VAR_13 = 0;
out:

 FUNC_1(VAR_4, VAR_2, VAR_10);
 FUNC_1(VAR_4, VAR_3, VAR_11);

 return VAR_13;
}
