
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int curbssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int*,int*,int,int) ;
 int FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ath_softc *VAR_3)
{
 struct ath_hw *VAR_4 = VAR_3->sc_ah;
 struct ath_common *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = 0;
 int VAR_7, VAR_8, VAR_9 = 0;
 u8 VAR_10[VAR_2];
 u8 VAR_11[VAR_2];

 FUNC_3(VAR_10, 0, VAR_2);
 FUNC_3(VAR_11, 0, VAR_2);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_11[VAR_8] = 0xff;


 VAR_10[VAR_9] = 0xa0;
 VAR_9++;


 VAR_9 += 3;





 VAR_9 += 6;


 FUNC_2((VAR_10 + VAR_9), VAR_5->curbssid, VAR_0);

 VAR_9 += 6;


 FUNC_2((VAR_10 + VAR_9), VAR_5->curbssid, VAR_0);


 VAR_11[0] = 0xfe;
 VAR_11[1] = 0x03;
 VAR_11[2] = 0xc0;

 VAR_7 = FUNC_1(VAR_4, VAR_10, VAR_11,
      VAR_6, VAR_9);
 if (VAR_7)
  goto exit;

 VAR_6++;




 VAR_10[0] = 0xC0;

 VAR_7 = FUNC_1(VAR_4, VAR_10, VAR_11,
      VAR_6, VAR_9);
exit:
 return VAR_7;
}
