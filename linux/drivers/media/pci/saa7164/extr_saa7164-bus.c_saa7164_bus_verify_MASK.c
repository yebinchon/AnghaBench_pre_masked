
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmComResBusInfo {scalar_t__ m_dwSizeSetRing; scalar_t__ m_dwSizeGetRing; int m_dwGetWritePos; int m_dwGetReadPos; int m_dwSetWritePos; int m_dwSetReadPos; } ;
struct saa7164_dev {struct tmComResBusInfo bus; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct saa7164_dev*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct saa7164_dev *VAR_1)
{
 struct tmComResBusInfo *VAR_2 = &VAR_1->bus;
 int VAR_3 = 0;

 if (FUNC_2(VAR_2->m_dwSetReadPos) > VAR_2->m_dwSizeSetRing)
  VAR_3++;

 if (FUNC_2(VAR_2->m_dwSetWritePos) > VAR_2->m_dwSizeSetRing)
  VAR_3++;

 if (FUNC_2(VAR_2->m_dwGetReadPos) > VAR_2->m_dwSizeGetRing)
  VAR_3++;

 if (FUNC_2(VAR_2->m_dwGetWritePos) > VAR_2->m_dwSizeGetRing)
  VAR_3++;

 if (VAR_3) {
  VAR_0 = 0xffff;
  FUNC_1(VAR_1);
  VAR_0 = 1024;
  FUNC_0();
 }
}
